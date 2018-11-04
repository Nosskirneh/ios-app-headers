//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBComponentChildDelegate.h"

@interface HUBComponentChildDelegateMock : NSObject <HUBComponentChildDelegate>
{
    CDUnknownBlockType _onChildSelectedAtIndex;
    unsigned long long _willDisplayChildAtIndex;
    unsigned long long _didStopDisplayingChildAtIndex;
    id <HUBComponent> _childComponent;
}

@property(retain, nonatomic) id <HUBComponent> childComponent; // @synthesize childComponent=_childComponent;
@property(nonatomic) unsigned long long didStopDisplayingChildAtIndex; // @synthesize didStopDisplayingChildAtIndex=_didStopDisplayingChildAtIndex;
@property(nonatomic) unsigned long long willDisplayChildAtIndex; // @synthesize willDisplayChildAtIndex=_willDisplayChildAtIndex;
@property(copy, nonatomic) CDUnknownBlockType onChildSelectedAtIndex; // @synthesize onChildSelectedAtIndex=_onChildSelectedAtIndex;
- (void).cxx_destruct;
- (void)component:(id)arg1 childWithCustomViewSelectedAtIndex:(unsigned long long)arg2 customData:(id)arg3;
- (void)component:(id)arg1 didStopDisplayingChildAtIndex:(unsigned long long)arg2 view:(id)arg3;
- (void)component:(id)arg1 willDisplayChildAtIndex:(unsigned long long)arg2 view:(id)arg3;
- (id)component:(id)arg1 childComponentForModel:(id)arg2;

@end

