//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GAIError : NSObject
{
}

+ (id)errorWithCode:(long long)arg1 withUnderlyingError:(id)arg2 withFormat:(id)arg3;
+ (id)errorWithCode:(long long)arg1 withUnderlyingError:(id)arg2 withDescription:(id)arg3;
+ (id)errorWithCode:(long long)arg1 withFailedFilePath:(id)arg2 withFormat:(id)arg3;
+ (id)errorWithCode:(long long)arg1 withFailedFilePath:(id)arg2 withDescription:(id)arg3;
+ (id)errorWithCode:(long long)arg1 withFormat:(id)arg2;
+ (id)errorWithCode:(long long)arg1 withDescription:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
- (id)init;

@end

