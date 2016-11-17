/* Generated by RuntimeBrowser.
 */

@protocol TSKRenderingExporter <TSKExporter>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (bool)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 createPage:(bool)arg4;
- (bool)exportToURL:(NSURL *)arg1 pageNumber:(unsigned long long)arg2 delegate:(id <TSKImportExportDelegate>)arg3 error:(id*)arg4;
- (bool)incrementPage;
- (unsigned long long)pageCount;
- (bool)paginate;
- (void)performBlockWithImager:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TSDImager *, void*
- (bool)preparePage:(unsigned long long)arg1;
- (double)progressForCurrentPage;
- (bool)setInfosToCurrentPage;
- (void)setPaginate:(bool)arg1;
- (void)setup;
- (void)teardown;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRect;

@end
