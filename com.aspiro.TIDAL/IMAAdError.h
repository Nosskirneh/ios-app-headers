//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMAAdError : NSObject
{
    long long _type;
    long long _code;
    NSString *_message;
}

@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithErrorType:(long long)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;

@end

