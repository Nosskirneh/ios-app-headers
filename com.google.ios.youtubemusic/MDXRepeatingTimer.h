//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface MDXRepeatingTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    _Bool _cancelled;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

