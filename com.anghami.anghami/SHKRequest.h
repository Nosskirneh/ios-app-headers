//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLConnection;

@interface SHKRequest : NSObject
{
    NSURL *url;
    NSString *params;
    NSString *method;
    NSDictionary *headerFields;
    id delegate;
    SEL isFinishedSelector;
    NSURLConnection *connection;
    NSHTTPURLResponse *response;
    NSDictionary *headers;
    NSMutableData *data;
    NSString *result;
    _Bool success;
}

@property(nonatomic) _Bool success; // @synthesize success;
@property(retain) NSURLConnection *connection; // @synthesize connection;
@property(retain) NSHTTPURLResponse *response; // @synthesize response;
@property(retain) NSDictionary *headers; // @synthesize headers;
@property(retain, nonatomic, getter=getResult) NSString *result; // @synthesize result;
@property(retain) NSMutableData *data; // @synthesize data;
@property SEL isFinishedSelector; // @synthesize isFinishedSelector;
@property(retain) id delegate; // @synthesize delegate;
@property(retain) NSDictionary *headerFields; // @synthesize headerFields;
@property(retain) NSString *method; // @synthesize method;
@property(retain) NSString *params; // @synthesize params;
@property(retain) NSURL *url; // @synthesize url;
- (id)description;
- (void)finish;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)start;
- (id)initWithURL:(id)arg1 params:(id)arg2 delegate:(id)arg3 isFinishedSelector:(SEL)arg4 method:(id)arg5 autostart:(_Bool)arg6;
- (void)dealloc;

@end

