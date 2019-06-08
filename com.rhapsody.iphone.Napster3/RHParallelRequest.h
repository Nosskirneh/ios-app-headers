//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZDSDeferred, ZDSRejected;

@interface RHParallelRequest : NSObject
{
    _Bool _finished;
    ZDSDeferred *_deferred;
    ZDSRejected *_rejected;
    id _result;
}

@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) ZDSRejected *rejected; // @synthesize rejected=_rejected;
@property(retain, nonatomic) ZDSDeferred *deferred; // @synthesize deferred=_deferred;
- (void).cxx_destruct;
- (void)configureDeferred;
- (void)cancel;
- (id)initWithDeferred:(id)arg1;

@end

