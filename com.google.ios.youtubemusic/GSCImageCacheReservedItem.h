//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSCImageCacheReservedItem : NSObject
{
    unsigned long long _memorySize;
    NSString *_key;
}

@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) unsigned long long memorySize; // @synthesize memorySize=_memorySize;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 memorySize:(unsigned long long)arg2;

@end

