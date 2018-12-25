//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, UIImage, _ASDisplayLayer;
@protocol NSObject;

@protocol _ASDisplayLayerDelegate <NSObject>

@optional
+ (UIImage *)displayWithParameters:(id <NSObject>)arg1 isCancelled:(_Bool (^)(void))arg2;
+ (void)drawRect:(struct CGRect)arg1 withParameters:(id)arg2 isCancelled:(_Bool (^)(void))arg3 isRasterizing:(_Bool)arg4;
- (void)cancelDisplayAsyncLayer:(_ASDisplayLayer *)arg1;
- (void)displayAsyncLayer:(_ASDisplayLayer *)arg1 asynchronously:(_Bool)arg2;
- (void)didDisplayAsyncLayer:(_ASDisplayLayer *)arg1;
- (void)willDisplayAsyncLayer:(_ASDisplayLayer *)arg1 asynchronously:(_Bool)arg2;
- (NSObject *)drawParametersForAsyncLayer:(_ASDisplayLayer *)arg1;
@end

