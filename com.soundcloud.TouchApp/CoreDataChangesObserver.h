//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNotificationCenter;

@interface CoreDataChangesObserver : NSObject
{
    NSNotificationCenter *_notificationCenter;
    NSMutableArray *_observationTokens;
}

@property(retain, nonatomic) NSMutableArray *observationTokens; // @synthesize observationTokens=_observationTokens;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
- (id)userInfoFromNotification:(id)arg1 didSave:(_Bool)arg2;
- (void)postDataChangeNotificationWithUserInfo:(id)arg1 intoContext:(id)arg2;
- (id)observeSavesInContext:(id)arg1;
- (id)observeChangesInContext:(id)arg1;
- (void)observeSavesFromContext:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;
- (id)init;

@end

