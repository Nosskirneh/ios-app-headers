//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTEventFactoryMapper;

@protocol SPTEventFactory <NSObject>
- (id <SPTEventFactoryMapper>)mapperFactoryWithPageURI:(NSURL *)arg1 pageId:(NSString *)arg2;
@end

