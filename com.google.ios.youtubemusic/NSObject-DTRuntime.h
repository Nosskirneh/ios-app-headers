//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (DTRuntime)
+ (void)swizzleClassMethod:(SEL)arg1 withMethod:(SEL)arg2;
+ (void)swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;
+ (_Bool)addInstanceMethodWithSelectorName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addDeallocBlock:(CDUnknownBlockType)arg1;
@end

