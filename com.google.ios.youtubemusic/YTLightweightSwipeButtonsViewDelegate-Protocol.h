//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, UIView, YTICommand, YTIIcon, YTIMenuRenderer, YTLightweightSwipeButtonsView;

@protocol YTLightweightSwipeButtonsViewDelegate <NSObject>
- (UIImage *)swipeButtonsView:(YTLightweightSwipeButtonsView *)arg1 imageForIcon:(YTIIcon *)arg2;
- (void)swipeButtonsView:(YTLightweightSwipeButtonsView *)arg1 didNavigateToMenuRenderer:(YTIMenuRenderer *)arg2 sourceView:(UIView *)arg3;
- (void)swipeButtonsView:(YTLightweightSwipeButtonsView *)arg1 didRequestServiceEndpoint:(YTICommand *)arg2;
- (void)swipeButtonsView:(YTLightweightSwipeButtonsView *)arg1 didNavigateToEndpoint:(YTICommand *)arg2;
@end

