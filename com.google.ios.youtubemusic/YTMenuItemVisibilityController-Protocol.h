//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTIMenuConditionalNavigationItemRenderer, YTIMenuConditionalServiceItemRenderer;

@protocol YTMenuItemVisibilityController <NSObject>
- (_Bool)shouldShowServiceItemRenderer:(YTIMenuConditionalServiceItemRenderer *)arg1;
- (_Bool)shouldShowNavigationItemRenderer:(YTIMenuConditionalNavigationItemRenderer *)arg1;
@end

