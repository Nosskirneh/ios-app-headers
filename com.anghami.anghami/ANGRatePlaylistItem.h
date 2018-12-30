//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSString;

@interface ANGRatePlaylistItem : RLMObject
{
    _Bool _showInput;
    _Bool _isSelected;
    NSString *_picture;
    NSString *_mediumPicture;
    NSString *_bigPicture;
    NSString *_itemDescription;
    long long _rateValue;
}

+ (id)ignoredProperties;
+ (id)primaryKey;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool showInput; // @synthesize showInput=_showInput;
@property(nonatomic) long long rateValue; // @synthesize rateValue=_rateValue;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *bigPicture; // @synthesize bigPicture=_bigPicture;
@property(retain, nonatomic) NSString *mediumPicture; // @synthesize mediumPicture=_mediumPicture;
@property(retain, nonatomic) NSString *picture; // @synthesize picture=_picture;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end

