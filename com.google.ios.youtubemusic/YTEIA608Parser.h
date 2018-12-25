//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EIA608CaptionMemory, EIA608RollUpMemory, YTEIA608Cursor;
@protocol EIA608Processor;

@interface YTEIA608Parser : NSObject
{
    int _activeChannel;
    _Bool _isCurrentChannelActive;
    CDStruct_7d92f6c3 _lastCommand;
    id <EIA608Processor> _downstreamProcessor;
    EIA608RollUpMemory *_rollUp;
    EIA608CaptionMemory *_hiddenMemory;
    EIA608CaptionMemory *_displayedMemory;
    YTEIA608Cursor *_popOnCursor;
    YTEIA608Cursor *_paintOnCursor;
    _Bool _rollUpModeActive;
}

@property(nonatomic) _Bool rollUpModeActive; // @synthesize rollUpModeActive=_rollUpModeActive;
- (void).cxx_destruct;
- (void)assignCursors;
- (void)flipMemories;
- (_Bool)checkParity:(unsigned char)arg1;
- (id)attributedString;
- (int)processCommand:(CDStruct_7d92f6c3)arg1;
- (id)initWithChannel:(int)arg1;

@end

