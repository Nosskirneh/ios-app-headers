//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FirebaseAnalyticsWrapping-Protocol.h"

@interface FirebaseAnalyticsWrapper : NSObject <FirebaseAnalyticsWrapping>
{
    CDUnknownBlockType _troubleShootingBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType troubleShootingBlock; // @synthesize troubleShootingBlock=_troubleShootingBlock;
- (void).cxx_destruct;
- (id)osVersionString;
- (id)enrichParametersWithTroubleShootingID:(id)arg1;
- (void)trackScreenWithName:(id)arg1;
- (void)logEventWithName:(id)arg1 parameters:(id)arg2;
- (id)initWithTroubleShootingBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

