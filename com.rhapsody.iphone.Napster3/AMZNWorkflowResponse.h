//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;

@interface AMZNWorkflowResponse : NSObject
{
    _Bool _succeeded;
    _Bool _isRecoverable;
    NSString *_requestID;
    NSDictionary *_result;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(readonly, nonatomic) _Bool isRecoverable; // @synthesize isRecoverable=_isRecoverable;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (id)initCancelledResponseForRequest:(id)arg1;
- (id)initFromQueryParams:(id)arg1;

@end
