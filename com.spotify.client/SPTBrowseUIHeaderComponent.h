//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponentWithChildren-Protocol.h"

@protocol HUBComponentChildDelegate;

@interface SPTBrowseUIHeaderComponent : HUGSThemableComponent <HUBComponentWithChildren>
{
    id <HUBComponentChildDelegate> _childDelegate;
}

@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (id)layoutTraits;

@end

