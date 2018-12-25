//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;

@protocol MDXLocalStorage <NSObject>
@property(nonatomic) _Bool userHasInteractedWithSmartRemote;
@property(retain, nonatomic) NSDate *timestampOfLastSmartRemoteMealbar;
@property(retain, nonatomic) NSDictionary *assistedSignInScreenIDTimestampMap;
@property(retain, nonatomic) NSArray *pairedScreens;
@property(retain, nonatomic) NSDictionary *DIALScreenClientNames;
@property(retain, nonatomic) NSDictionary *DIALScreenIDs;
@property(retain, nonatomic) NSDictionary *screenIDTimestampMap;
@property(retain, nonatomic) NSDate *lastMDXNotificationInteractionTime;
@property(retain, nonatomic) NSDate *timestampOfLastTooltipPromotion;
@property(retain, nonatomic) NSDate *timestampOfLastMealbarPromotion;
@property(retain, nonatomic) NSDate *timestampOfLastClingPromotion;
@property(retain, nonatomic) NSDate *interactionHistoryTimestamp;
@property(retain, nonatomic) NSString *connectionCountDailyHistory;
@property(retain, nonatomic) NSString *availableSessionsDailyHistory;
@property(nonatomic) long long promotionReferenceID;
@property(nonatomic) long long numberOfShownTooltipPromotions;
@property(nonatomic) long long numberOfShownMealbarPromotions;
@property(nonatomic) long long numberOfShownClingPromotions;
@end

