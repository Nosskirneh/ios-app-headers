//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface EDAMNoteFilter : NSObject <NSCoding>
{
    int __order;
    _Bool __ascending;
    NSString *__words;
    NSString *__notebookGuid;
    NSArray *__tagGuids;
    NSString *__timeZone;
    _Bool __inactive;
    _Bool __order_isset;
    _Bool __ascending_isset;
    _Bool __words_isset;
    _Bool __notebookGuid_isset;
    _Bool __tagGuids_isset;
    _Bool __timeZone_isset;
    _Bool __inactive_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetInactive;
- (_Bool)inactiveIsSet;
@property(nonatomic, getter=inactive, setter=setInactive:) _Bool inactive; // @dynamic inactive;
- (void)unsetTimeZone;
- (_Bool)timeZoneIsSet;
@property(retain, nonatomic, getter=timeZone, setter=setTimeZone:) NSString *timeZone; // @dynamic timeZone;
- (void)unsetTagGuids;
- (_Bool)tagGuidsIsSet;
@property(retain, nonatomic, getter=tagGuids, setter=setTagGuids:) NSArray *tagGuids; // @dynamic tagGuids;
- (void)unsetNotebookGuid;
- (_Bool)notebookGuidIsSet;
@property(retain, nonatomic, getter=notebookGuid, setter=setNotebookGuid:) NSString *notebookGuid; // @dynamic notebookGuid;
- (void)unsetWords;
- (_Bool)wordsIsSet;
@property(retain, nonatomic, getter=words, setter=setWords:) NSString *words; // @dynamic words;
- (void)unsetAscending;
- (_Bool)ascendingIsSet;
@property(nonatomic, getter=ascending, setter=setAscending:) _Bool ascending; // @dynamic ascending;
- (void)unsetOrder;
- (_Bool)orderIsSet;
@property(nonatomic, getter=order, setter=setOrder:) int order; // @dynamic order;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrder:(int)arg1 ascending:(_Bool)arg2 words:(id)arg3 notebookGuid:(id)arg4 tagGuids:(id)arg5 timeZone:(id)arg6 inactive:(_Bool)arg7;

@end
