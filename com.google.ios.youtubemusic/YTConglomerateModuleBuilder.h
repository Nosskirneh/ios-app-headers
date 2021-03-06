//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;
@protocol GIMModule;

@interface YTConglomerateModuleBuilder : NSObject
{
    NSArray *_moduleInstances;
    NSMutableSet *_boundModuleClasses;
    id <GIMModule> _runningConglomerate;
}

- (void).cxx_destruct;
- (_Bool)isModuleBindingComplete;
- (void)markModuleAsBound:(id)arg1;
- (void)addModuleToConglomerate:(id)arg1;
- (_Bool)areAllModulesBound:(id)arg1;
- (id)getBindableModule;
- (id)build;
- (id)initWithModules:(id)arg1;

@end

