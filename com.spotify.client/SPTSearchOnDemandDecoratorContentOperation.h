//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@protocol HUBContentOperationDelegate, SPTOnDemandSet;

@interface SPTSearchOnDemandDecoratorContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <SPTOnDemandSet> _onDemandSet;
}

@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recursivelyDecorateComponentModelBuilders:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithOnDemandSet:(id)arg1;

@end

