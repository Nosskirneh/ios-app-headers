//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OAConsumer : NSObject
{
    NSString *key;
    NSString *secret;
}

@property(retain) NSString *secret; // @synthesize secret;
@property(retain) NSString *key; // @synthesize key;
- (void)dealloc;
- (id)initWithKey:(id)arg1 secret:(id)arg2;

@end

