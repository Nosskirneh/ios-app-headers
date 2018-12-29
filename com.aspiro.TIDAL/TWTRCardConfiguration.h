//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSString, UIImage;

@interface TWTRCardConfiguration : NSObject <NSCopying>
{
    unsigned long long _cardType;
    NSString *_cardTitle;
    NSString *_cardDescription;
    UIImage *_image;
    NSMutableDictionary *_metadataFields;
    NSString *_mediaID;
}

+ (id)deviceID;
+ (id)appCardConfigurationWithPromoImage:(id)arg1 mediaID:(id)arg2 iPhoneAppID:(id)arg3 iPadAppID:(id)arg4 googlePlayAppID:(id)arg5;
+ (id)appCardConfigurationWithPromoImage:(id)arg1 iPhoneAppID:(id)arg2 iPadAppID:(id)arg3 googlePlayAppID:(id)arg4;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(copy, nonatomic) NSMutableDictionary *metadataFields; // @synthesize metadataFields=_metadataFields;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *cardDescription; // @synthesize cardDescription=_cardDescription;
@property(readonly, copy, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(readonly, nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (id)JSONStringRepresentation;
- (id)dictionaryRepresentation;
- (void)setPropertiesFromMetadataFields:(id)arg1;
- (id)cardConfigurationByAppendingMediaID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allMetadataFields;
- (id)initWithMetadataFields:(id)arg1;

@end

