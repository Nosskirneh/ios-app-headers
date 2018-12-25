//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@interface YTAddEntryResponderEvent : YTResponderEvent
{
    _Bool _insertAtTop;
    _Bool _insertInPriorityOrder;
    id _entry;
}

+ (id)eventWithFirstResponder:(id)arg1 entry:(id)arg2 insertInPriorityOrder:(_Bool)arg3;
+ (id)eventWithFirstResponder:(id)arg1 entry:(id)arg2 insertAtTop:(_Bool)arg3;
@property(readonly, nonatomic) _Bool insertInPriorityOrder; // @synthesize insertInPriorityOrder=_insertInPriorityOrder;
@property(readonly, nonatomic) _Bool insertAtTop; // @synthesize insertAtTop=_insertAtTop;
@property(readonly, nonatomic) id entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 entry:(id)arg2 insertAtTop:(_Bool)arg3 insertInPriorityOrder:(_Bool)arg4;

@end

