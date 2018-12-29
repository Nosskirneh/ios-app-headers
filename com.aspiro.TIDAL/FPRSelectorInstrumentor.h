//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FPRSelectorInstrumentor : NSObject
{
    Class _class;
    SEL _selector;
    _Bool _isClassSelector;
    _Bool _swizzled;
    id _replacingBlock;
}

@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (CDUnknownFunctionPointerType)currentIMP;
- (void)unswizzle;
- (void)swizzle;
- (void)setReplacingBlock:(id)arg1;
- (id)initWithSelector:(SEL)arg1 class:(Class)arg2 isClassSelector:(_Bool)arg3;
- (id)init;

@end

