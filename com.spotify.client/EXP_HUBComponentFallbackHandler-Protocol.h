//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol EXP_HUBComponent;

@protocol EXP_HUBComponentFallbackHandler
@property(readonly, copy, nonatomic) NSString *defaultComponentCategory;
@property(readonly, copy, nonatomic) NSString *defaultComponentName;
@property(readonly, copy, nonatomic) NSString *defaultComponentNamespace;
- (id <EXP_HUBComponent>)fallbackComponentForCategory:(NSString *)arg1;
@end

