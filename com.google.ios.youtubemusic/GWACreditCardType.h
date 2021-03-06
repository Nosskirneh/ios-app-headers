//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWACardType-Protocol.h"

@class NSData, NSString, OrchImageWithCaption, UIImage;

@interface GWACreditCardType : NSObject <GWACardType>
{
    int _cvcLength;
    NSData *_typeToken;
    UIImage *_icon;
    OrchImageWithCaption *_cvcImage;
    NSString *_cvcHeader;
    NSString *_cvcText;
    NSString *_title;
    NSString *_uniqueId;
}

@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *cvcText; // @synthesize cvcText=_cvcText;
@property(readonly, nonatomic) NSString *cvcHeader; // @synthesize cvcHeader=_cvcHeader;
@property(readonly, nonatomic) OrchImageWithCaption *cvcImage; // @synthesize cvcImage=_cvcImage;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) int cvcLength; // @synthesize cvcLength=_cvcLength;
@property(readonly, nonatomic) NSData *typeToken; // @synthesize typeToken=_typeToken;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 uniqueId:(id)arg2 icon:(id)arg3;
- (id)description;
- (id)initWithCardUpdateForm:(id)arg1;
- (id)initWithCardType:(id)arg1;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType iconUpdateBlock;

@end

