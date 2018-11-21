//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBViewModelLoaderDelegate-Protocol.h"

@protocol EXP_HUBViewModelLoader, EXP_SPTHubViewModelProviderDelegate;

@interface EXP_SPTHubViewModelProvider : NSObject <EXP_HUBViewModelLoaderDelegate>
{
    id <EXP_SPTHubViewModelProviderDelegate> _delegate;
    id <EXP_HUBViewModelLoader> _viewModelLoader;
}

@property(retain, nonatomic) id <EXP_HUBViewModelLoader> viewModelLoader; // @synthesize viewModelLoader=_viewModelLoader;
@property(nonatomic) __weak id <EXP_SPTHubViewModelProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewModelLoader:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)viewModelLoader:(id)arg1 didLoadViewModel:(id)arg2;
- (void)loadViewModel;
- (id)initWithViewModelLoader:(id)arg1;

@end

