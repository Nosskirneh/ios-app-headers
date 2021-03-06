//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol _TtP8Features45AnalyticsPromotablePlayableStateRepresentable_ <NSCoding, NSObject>
@property(readonly, nonatomic) _Bool hasFiredImpression;
@property(readonly, copy, nonatomic) NSArray *impressionUrls;
@property(readonly, copy, nonatomic) NSArray *playablePlayedUrls;
@property(readonly, copy, nonatomic) NSArray *playableClickedUrls;
@property(readonly, copy, nonatomic) NSArray *promoterClickedUrls;
@property(readonly, copy, nonatomic) NSArray *profileClickedUrls;
@property(readonly, copy, nonatomic) NSString *analyticsResource;
@property(readonly, copy, nonatomic) NSString *userUrnString;
@property(readonly, copy, nonatomic) NSString *promoterUrnString;
@property(readonly, copy, nonatomic) NSString *playableUrnString;
@property(readonly, copy, nonatomic) NSString *promotedUrnString;
- (void)setHasFiredImpression;
- (NSDictionary *)defaultEventLoggerAttributes;
@end

