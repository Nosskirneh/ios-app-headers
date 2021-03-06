//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface UAActionResult : NSObject
{
    id _value;
    long long _fetchResult;
    NSError *_error;
    long long _status;
}

+ (id)actionNotFoundResult;
+ (id)rejectedArgumentsResult;
+ (id)resultWithError:(id)arg1;
+ (id)resultWithError:(id)arg1 withFetchResult:(long long)arg2;
+ (id)emptyResult;
+ (id)resultWithValue:(id)arg1 withFetchResult:(long long)arg2;
+ (id)resultWithValue:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 withFetchResult:(long long)arg2 withStatus:(long long)arg3;

@end

