//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSString;
@protocol APEventDescripting, APScreenNameable;

@protocol _TtP8Features28APAnalyticsProviderInterface_ <NSObject>
- (void)setDimensions:(NSArray *)arg1;
- (void)flush;
- (void)tagEvent:(id <APEventDescripting>)arg1;
- (NSSet *)trackedEvents;
- (void)tagScreen:(id <APScreenNameable>)arg1;
- (void)resumeSession;
- (void)closeSession;
- (void)startSession;
- (void)setUserInfo:(NSString *)arg1;
- (void)setAnalyticsEnabled:(_Bool)arg1;
@end
