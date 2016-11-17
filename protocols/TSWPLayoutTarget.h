/* Generated by RuntimeBrowser.
 */

@protocol TSWPLayoutTarget <NSObject>

@required

- (void)addAttachmentLayout:(TSDLayout *)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (unsigned int)autosizeFlags;
- (NSObject<TSWPColumnMetrics> *)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (NSMutableArray *)columns;
- (NSArray *)currentAnchoredDrawableLayouts;
- (NSArray *)currentInlineDrawableLayouts;
- (struct CGSize { double x1; double x2; })currentSize;
- (<TSWPFootnoteHeightMeasurer> *)footnoteHeightMeasurer;
- (<TSWPFootnoteMarkProvider> *)footnoteMarkProvider;
- (bool)isInstructional;
- (bool)isLastTarget;
- (bool)isLayoutOffscreen;
- (bool)layoutIsValid;
- (double)maxAnchorY;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (int)naturalAlignment;
- (int)naturalDirection;
- (TSPObject<TSDHint> *)nextTargetFirstChildHint;
- (<TSWPOffscreenColumn> *)nextTargetFirstColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)nextTargetTopicNumbers;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (struct CGPoint { double x1; double x2; })position;
- (<TSWPOffscreenColumn> *)previousTargetLastColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)previousTargetTopicNumbers;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textIsVertical;
- (TSDLayout *)validatedLayoutForAnchoredDrawable:(id <TSDInfo>)arg1;
- (TSDLayout *)validatedLayoutForInlineDrawable:(id <TSDInfo>)arg1;
- (int)verticalAlignment;
- (bool)wantsLineFragments;

@optional

- (struct CGPoint { double x1; double x2; })anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint { double x1; double x2; })arg1;
- (NSMutableArray *)anchoredDrawablesForRelayout;
- (TSDCanvas *)canvas;
- (struct __CFLocale { }*)hyphenationLocale;
- (TSUBezierPath *)interiorClippingPath;
- (bool)invalidateForPageCountChange;
- (struct CGPoint { double x1; double x2; })layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })layoutPositionFromInlineAttachmentPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskRect;
- (unsigned int)pageIndex;
- (TSDLayout *)parentLayoutForInlineAttachments;
- (void)setAnchoredDrawablesForRelayout:(NSMutableArray *)arg1;
- (bool)shouldHyphenate;
- (bool)siblingTargetIsManipulatingDrawable:(TSDDrawableInfo *)arg1;

@end
