//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FlurryHttpAsyncTask, NSError, NSHTTPURLResponse, NSMutableData, NSMutableURLRequest;
@protocol FlurryHttpAsyncTaskDelegate;

@interface FlurryConnectionDelegate : NSObject
{
    _Bool _done;
    int _redirectCount;
    NSMutableURLRequest *_originalRequest;
    NSHTTPURLResponse *_response;
    NSMutableData *_body;
    NSError *_error;
    id <FlurryHttpAsyncTaskDelegate> _httpTaskDelegate;
    FlurryHttpAsyncTask *_httpTask;
}

@property(nonatomic) int redirectCount; // @synthesize redirectCount=_redirectCount;
@property(retain, nonatomic) FlurryHttpAsyncTask *httpTask; // @synthesize httpTask=_httpTask;
@property(retain, nonatomic) id <FlurryHttpAsyncTaskDelegate> httpTaskDelegate; // @synthesize httpTaskDelegate=_httpTaskDelegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSMutableData *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
- (void).cxx_destruct;
- (id)constructResponse;
- (void)connectionCanceled;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (_Bool)isDone;
- (id)initWithTaskDelegate:(id)arg1 taskParent:(id)arg2;
- (id)init;

@end

