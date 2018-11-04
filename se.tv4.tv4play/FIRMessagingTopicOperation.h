//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FIRMessagingCheckinService, NSDictionary, NSString, NSURLSessionDataTask;

@interface FIRMessagingTopicOperation : NSOperation
{
    _Bool _isFinished;
    _Bool _isExecuting;
    NSString *_topic;
    long long _action;
    NSString *_token;
    NSDictionary *_options;
    FIRMessagingCheckinService *_checkinService;
    CDUnknownBlockType _completion;
    NSURLSessionDataTask *_dataTask;
}

+ (id)sharedSession;
@property(retain) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) FIRMessagingCheckinService *checkinService; // @synthesize checkinService=_checkinService;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (void)performSubscriptionChange;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)start;
- (void)setFinished:(_Bool)arg1;
- (_Bool)isFinished;
- (void)setExecuting:(_Bool)arg1;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)dealloc;
- (id)initWithTopic:(id)arg1 action:(long long)arg2 token:(id)arg3 options:(id)arg4 checkinService:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end

