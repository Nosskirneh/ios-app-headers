//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface Version_IAC_10 : NSObject
{
    unsigned short _major;
    unsigned short _minor;
    unsigned short _revision;
}

@property unsigned short revision; // @synthesize revision=_revision;
@property unsigned short minor; // @synthesize minor=_minor;
@property unsigned short major; // @synthesize major=_major;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

