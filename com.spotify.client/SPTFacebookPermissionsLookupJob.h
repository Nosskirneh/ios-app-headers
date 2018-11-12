//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SPTAsyncScheduler;

@interface SPTFacebookPermissionsLookupJob : NSObject
{
    struct FacebookService *_facebook_service;
    id <SPTAsyncScheduler> _scheduler;
}

+ (id)facebookPermissionsLookupJobWithFacebookService:(struct FacebookService *)arg1 andScheduler:(id)arg2;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) struct FacebookService *facebook_service; // @synthesize facebook_service=_facebook_service;
- (void).cxx_destruct;
- (void)invalidate;
- (void)run:(CDUnknownBlockType)arg1;
- (id)initWithFacebookService:(struct FacebookService *)arg1 andScheduler:(id)arg2;

@end

