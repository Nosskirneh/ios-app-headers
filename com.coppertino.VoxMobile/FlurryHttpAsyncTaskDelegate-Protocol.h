//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlurryHTTPResponse;
@protocol IFlurryHttpAsyncTask;

@protocol FlurryHttpAsyncTaskDelegate <NSObject>
- (void)requestSuccessful:(id <IFlurryHttpAsyncTask>)arg1 withResponse:(FlurryHTTPResponse *)arg2;
- (void)requestDidCancel:(id <IFlurryHttpAsyncTask>)arg1 withResponse:(FlurryHTTPResponse *)arg2;
- (void)requestDidFail:(id <IFlurryHttpAsyncTask>)arg1 withResponse:(FlurryHTTPResponse *)arg2;
@end

