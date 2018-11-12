//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GPBFileDescriptor : NSObject
{
    NSString *package_;
    NSString *objcPrefix_;
    unsigned char syntax_;
}

@property(readonly, nonatomic) unsigned char syntax; // @synthesize syntax=syntax_;
@property(readonly, copy, nonatomic) NSString *objcPrefix; // @synthesize objcPrefix=objcPrefix_;
@property(readonly, copy, nonatomic) NSString *package; // @synthesize package=package_;
- (void)dealloc;
- (id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2;
- (id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3;

@end

