//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMPPSlot : NSObject
{
    NSString *_put;
    NSString *_get;
}

@property(readonly, copy, nonatomic) NSString *get; // @synthesize get=_get;
@property(readonly, copy, nonatomic) NSString *put; // @synthesize put=_put;
- (void).cxx_destruct;
- (id)initWithIQ:(id)arg1;
- (id)initWithPut:(id)arg1 andGet:(id)arg2;
- (id)init;

@end
