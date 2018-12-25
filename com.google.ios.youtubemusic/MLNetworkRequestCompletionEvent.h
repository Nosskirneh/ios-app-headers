//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLNetworkRequestBaseEvent.h"

@class NSError, NSURLResponse;

@interface MLNetworkRequestCompletionEvent : MLNetworkRequestBaseEvent
{
    NSURLResponse *_response;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 absoluteTime:(double)arg2 response:(id)arg3 error:(id)arg4;

@end

