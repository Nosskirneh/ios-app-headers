//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol HUBComponent;

@protocol HUBComponentFallbackHandler
- (id <HUBComponent>)fallbackComponentForCategory:(NSString *)arg1;
@property(nonatomic, readonly) NSString *defaultComponentCategory;
@property(nonatomic, readonly) NSString *defaultComponentName;
@property(nonatomic, readonly) NSString *defaultComponentNamespace;
@end

