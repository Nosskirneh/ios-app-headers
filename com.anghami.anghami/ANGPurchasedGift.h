//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGGift.h"

@class NSString;

@interface ANGPurchasedGift : ANGGift
{
    _Bool _hideScheduleButton;
    _Bool _hideSeeMore;
    long long _giftStatus;
    long long _shceduledTimeStamp;
    NSString *_giftInviteCode;
    NSString *_lastScreenTitle;
    NSString *_lastScreenSubtitle;
    NSString *_giftStatusImage;
    NSString *_lastScreenScheduleButtonText;
    NSString *_lastScreenSeeMoreLink;
    NSString *_lastScreenSeeMoreText;
    NSString *_lastScreenShareText;
    NSString *_shareText;
    NSString *_shareImageLink;
    NSString *_giftDescription;
    NSString *_serverLocalgiftID;
    long long _purchaseTimestamp;
    NSString *_defaultStatusText;
}

+ (id)primaryKey;
+ (id)allPurchasedGifts;
+ (id)createPurchasegGift:(id)arg1 transactionIdentifier:(id)arg2;
@property(retain, nonatomic) NSString *defaultStatusText; // @synthesize defaultStatusText=_defaultStatusText;
@property long long purchaseTimestamp; // @synthesize purchaseTimestamp=_purchaseTimestamp;
@property _Bool hideSeeMore; // @synthesize hideSeeMore=_hideSeeMore;
@property(retain, nonatomic) NSString *serverLocalgiftID; // @synthesize serverLocalgiftID=_serverLocalgiftID;
@property(retain, nonatomic) NSString *giftDescription; // @synthesize giftDescription=_giftDescription;
@property(retain, nonatomic) NSString *shareImageLink; // @synthesize shareImageLink=_shareImageLink;
@property(retain, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property _Bool hideScheduleButton; // @synthesize hideScheduleButton=_hideScheduleButton;
@property(retain, nonatomic) NSString *lastScreenShareText; // @synthesize lastScreenShareText=_lastScreenShareText;
@property(retain, nonatomic) NSString *lastScreenSeeMoreText; // @synthesize lastScreenSeeMoreText=_lastScreenSeeMoreText;
@property(retain, nonatomic) NSString *lastScreenSeeMoreLink; // @synthesize lastScreenSeeMoreLink=_lastScreenSeeMoreLink;
@property(retain, nonatomic) NSString *lastScreenScheduleButtonText; // @synthesize lastScreenScheduleButtonText=_lastScreenScheduleButtonText;
@property(retain, nonatomic) NSString *giftStatusImage; // @synthesize giftStatusImage=_giftStatusImage;
@property(retain, nonatomic) NSString *lastScreenSubtitle; // @synthesize lastScreenSubtitle=_lastScreenSubtitle;
@property(retain, nonatomic) NSString *lastScreenTitle; // @synthesize lastScreenTitle=_lastScreenTitle;
@property(retain, nonatomic) NSString *giftInviteCode; // @synthesize giftInviteCode=_giftInviteCode;
@property long long shceduledTimeStamp; // @synthesize shceduledTimeStamp=_shceduledTimeStamp;
@property long long giftStatus; // @synthesize giftStatus=_giftStatus;
- (void).cxx_destruct;
- (_Bool)isReady;
- (void)markPurchasedWithServerConsumable:(id)arg1;
- (void)showDateEditingActionSource:(id)arg1;
- (void)updateScheduleDate:(id)arg1;
- (void)showNameEditing;
- (void)startEditingSource:(id)arg1 sourceView:(id)arg2 viewController:(id)arg3;
- (void)giftShareTextCompletionHandler:(CDUnknownBlockType)arg1;
- (void)giftShareLinkCompletionHandler:(CDUnknownBlockType)arg1;
- (id)giftSharingLink;
- (id)parametersDictionary;
- (id)giftStatusString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithInfoFromDict:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

