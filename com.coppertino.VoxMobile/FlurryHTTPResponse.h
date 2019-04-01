//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSError, NSMutableDictionary;

@interface FlurryHTTPResponse : NSObject
{
    int _statusCode;
    NSData *_body;
    NSError *_error;
    NSMutableDictionary *_headers;
}

+ (id)filePath:(int)arg1;
+ (id)readFromURL:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSData *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (id)saveToDisk;
- (id)description;
- (_Bool)isError;
- (_Bool)isSuccess;
- (id)initWithBody:(id)arg1 statusCode:(long long)arg2 headers:(id)arg3 error:(id)arg4;
- (id)initWithResponse:(id)arg1 body:(id)arg2 error:(id)arg3;

@end

