//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface YTTemplateElementFactory : NSObject
{
    NSMutableDictionary *_updateBlocks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)registerDefaultTypes;
- (id)elementWithAttributes:(struct NSDictionary *)arg1 children:(id)arg2 type:(id)arg3;
- (void)registerElementBlock:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (id)init;

@end

