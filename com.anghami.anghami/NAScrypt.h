//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NAScrypt : NSObject
{
}

+ (id)scrypt:(id)arg1 salt:(id)arg2 N:(unsigned long long)arg3 r:(unsigned int)arg4 p:(unsigned int)arg5 length:(unsigned long long)arg6 error:(id *)arg7;
+ (id)scrypt:(id)arg1 salt:(id)arg2 error:(id *)arg3;
+ (void)initialize;

@end
