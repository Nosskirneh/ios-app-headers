//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol GIMProvider;

@interface GIMBinding : NSObject
{
    NSString *_moduleName;
    NSString *_debugString;
    NSArray *_itemKeys;
    id <GIMProvider> _provider;
    Class _identifierClass;
}

+ (id)bindingWithItemKeys:(id)arg1 provider:(id)arg2 identifierClass:(Class)arg3 moduleName:(id)arg4 debugString:(id)arg5;
@property(readonly, nonatomic) Class identifierClass; // @synthesize identifierClass=_identifierClass;
@property(readonly, nonatomic) id <GIMProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSArray *itemKeys; // @synthesize itemKeys=_itemKeys;
- (void).cxx_destruct;

@end

