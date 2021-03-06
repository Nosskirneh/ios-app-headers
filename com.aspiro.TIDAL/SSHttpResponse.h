//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSError, NSMutableDictionary;

@interface SSHttpResponse : NSObject
{
    int _code;
    NSError *_error;
    NSData *_body;
    NSMutableDictionary *_headers;
}

@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forHeader:(id)arg2;
- (_Bool)isSuccessful;
- (id)init;

@end

