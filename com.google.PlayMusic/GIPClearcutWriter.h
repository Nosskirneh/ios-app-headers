//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GIPClearcutWriter : NSObject
{
    int _fd;
    unsigned long long _numBytes;
}

@property(nonatomic) unsigned long long numBytes; // @synthesize numBytes=_numBytes;
@property(nonatomic) int fd; // @synthesize fd=_fd;
- (_Bool)writeLogEvent:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

