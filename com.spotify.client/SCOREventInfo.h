//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCOREventInfo : NSObject
{
    struct EventInfo *_eventInfo;
}

- (_Bool)containsLabel:(id)arg1 publisherId:(id)arg2;
- (_Bool)containsLabel:(id)arg1;
- (_Bool)containsPublisher:(id)arg1;
- (struct EventInfo *)cppEventInfo;
- (id)labelsWithPublisherId:(id)arg1;
- (id)labels;
- (void)removeAllLabelsWithPublisherId:(id)arg1;
- (void)removeAllLabels;
- (void)removeLabelWithName:(id)arg1 publisherId:(id)arg2;
- (void)setPublisherWithId:(id)arg1;
- (void)setLabelWithName:(id)arg1 value:(id)arg2 publisherId:(id)arg3;
- (void)setLabels:(id)arg1 publisherId:(id)arg2;
- (void)removeLabelWithName:(id)arg1;
- (void)removePublisherWithId:(id)arg1;
- (id)labelWithName:(id)arg1 publisherId:(id)arg2;
- (id)labelWithName:(id)arg1;
- (void)setLabelWithName:(id)arg1 value:(id)arg2;
- (void)setLabels:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)initWithCppEventInfo:(struct EventInfo *)arg1;
- (id)initCopy:(id)arg1;
- (id)init;

@end

