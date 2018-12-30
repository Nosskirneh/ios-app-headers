//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FlurryHttpAsyncURLSessionTask, NSError, NSHTTPURLResponse, NSMutableData, NSMutableURLRequest;
@protocol FlurryHttpAsyncTaskDelegate;

@interface FlurryURLSessionDelegate : NSObject
{
    _Bool _done;
    int _redirectCount;
    NSMutableURLRequest *_originalRequest;
    NSHTTPURLResponse *_response;
    NSMutableData *_body;
    NSError *_error;
    id <FlurryHttpAsyncTaskDelegate> _httpTaskDelegate;
    FlurryHttpAsyncURLSessionTask *_httpTask;
}

@property(nonatomic) int redirectCount; // @synthesize redirectCount=_redirectCount;
@property(retain, nonatomic) FlurryHttpAsyncURLSessionTask *httpTask; // @synthesize httpTask=_httpTask;
@property(retain, nonatomic) id <FlurryHttpAsyncTaskDelegate> httpTaskDelegate; // @synthesize httpTaskDelegate=_httpTaskDelegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSMutableData *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
- (void).cxx_destruct;
- (id)constructResponse;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (_Bool)isDone;
- (id)initWithTaskDelegate:(id)arg1 taskParent:(id)arg2;
- (id)init;

@end
