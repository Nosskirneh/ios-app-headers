//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol SPTAsyncScheduler;

@interface SPTPlayerRestorable : NSObject
{
    id <SPTAsyncScheduler> _scheduler;
    shared_ptr_43aca8fa _restorable;
}

@property(nonatomic) shared_ptr_43aca8fa restorable; // @synthesize restorable=_restorable;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *json;
- (void)restore:(id)arg1;
- (id)initWithRestorable:(shared_ptr_43aca8fa)arg1 scheduler:(id)arg2;

@end

