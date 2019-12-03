//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class UIFont;
@protocol HUBContentOperationDelegate;

@interface SPTFreeTierAlbumContributingArtistsContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    UIFont *_subtitleFont;
}

@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)init;

@end
