#import "NSObject.h"

#import "NSSplitViewDelegate.h"

@class NSSplitView, NSString, NSView, NSWindow;

@interface MSSplitViewDelegate : NSObject <NSSplitViewDelegate>
{
    long long leftSide;
    long long rightSide;
    BOOL isInVersionBrowser;
    NSView *savedInspectorView;
    NSView *_layerListView;
    NSView *_canvasView;
    NSView *_inspectorView;
    NSSplitView *_splitView;
    NSWindow *_window;
}

@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) __weak NSView *inspectorView; // @synthesize inspectorView=_inspectorView;
@property(nonatomic) __weak NSView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) __weak NSView *layerListView; // @synthesize layerListView=_layerListView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didExitVersionBrowser;
- (void)didEnterVersionBrowser;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)dividerIndexBelongsToInspectorView:(long long)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
