//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HUBComponentDefaults : NSObject
{
    NSString *_componentNamespace;
    NSString *_componentName;
    NSString *_componentCategory;
}

@property(readonly, copy, nonatomic) NSString *componentCategory; // @synthesize componentCategory=_componentCategory;
@property(readonly, copy, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property(readonly, copy, nonatomic) NSString *componentNamespace; // @synthesize componentNamespace=_componentNamespace;
- (void).cxx_destruct;
- (id)initWithComponentNamespace:(id)arg1 componentName:(id)arg2 componentCategory:(id)arg3;

@end

